library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity lab4 is
 port
 (
    clk:std_logic;   
  jud: in std_logic;  
  people: in std_logic_vector(5 downto 0);  
  light: out std_logic_vector(5 downto 0); 
  seg:out std_logic_vector(6 downto 0 )
 );
end lab4;
architecture BE of lab4 is
  
signal lock:std_logic; 
signal cnt_seg:std_logic_vector (3 downto 0):="0000";
signal cnt:std_logic_vector (25 downto 0):="00000000000000000000000000";
signal clk_out:std_logic:='0';
begin

process(clk)
begin
if(clk'event and clk='1')then
		cnt<=cnt+'1';
	if(cnt="00000000000000000000000000")then
		clk_out<='0';
		end if;
	if(cnt="00000000000000000000000011")then
		cnt<="00000000000000000000000000";
		clk_out<='1';
		end if;
		end if;
end process;

 process (jud,people,clk,clk_out,lock)
  variable temp_seg:std_logic_vector(3 downto 0):="0000";
 begin
  if(jud='0')then 
   light<="000000";  
    lock<='0';
	 temp_seg:="0000";
  else
  
   if (clk_out'event and clk_out ='1')then
		temp_seg:=cnt_seg+'1';
		if(temp_seg>"1001")then
		temp_seg:="0000";
		end if;
		end if;
  if (jud='1')then    
    IF(lock='0') THEN   
    IF(clk'EVENT AND clk='1') THEN        
   case people is
   when "100000"=>light<="100000";lock<='1';   
   when "010000"=>light<="010000";lock<='1';
   when "001000"=>light<="001000";lock<='1';
   when "000100"=>light<="000100";lock<='1'; 
	when "000010"=>light<="000010";lock<='1'; 
	when "000001"=>light<="000001";lock<='1'; 
   when others=>light<="000000";   
   end case;
	IF(lock'EVENT AND lock='0') THEN
	cnt_seg<="0000";
	temp_seg:="0000";
	end if;
end if; 
end if;
end if;
end if;
cnt_seg<=temp_seg;
 end process;
 
 process(cnt_seg)
begin 
case cnt_seg is
  when"0000"=>seg<=not "1000000";
  when"0001"=>seg<=not "1111001";
  when"0010"=>seg<=not "0100100";
  when"0011"=>seg<=not "0110000";
  when"0100"=>seg<=not "0011001";
  when"0101"=>seg<=not "0010010";
  when"0110"=>seg<=not "0000010";
  when"0111"=>seg<=not "1111000";
  when"1000"=>seg<=not "0000000";
  when"1001"=>seg<=not "0010000";
  when others=>seg<=not "1111111";
  end case;
  end process;
  
end BE;
 
 
 
 
 
 
 
 
