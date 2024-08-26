
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity clock is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           seg1 : out  STD_LOGIC_vector(6 downto 0);
           seg2 : out  STD_LOGIC_vector(6 downto 0));
end clock;

architecture Behavioral of clock is
signal clk_out:std_logic:='0';
signal cnt:std_logic_vector (25 downto 0):="00000000000000000000000000";
signal cnt_H:std_logic_vector(3 downto 0):="0000";
signal cnt_L:std_logic_vector(3 downto 0):="0000";
begin
process(clk)
begin
if(clk'event and clk='1')then
		cnt<=cnt+'1';
	if(cnt="00000000000000000000000000")then
		clk_out<='0';
		end if;
	if(cnt="00000000000000001111101000")then
		cnt<="00000000000000000000000000";
		clk_out<='1';
		end if;
		end if;
end process;
process(clk_out,rst)
 variable temp_H,temp_L:std_logic_vector(3 downto 0):="0000";
 begin 
 IF(rst='0')then
  temp_H:="0000";
  temp_L:="0000";
  else 
  if (clk_out'event and clk_out ='1')then
		temp_L:=cnt_L+'1';
		if(temp_L>"1001")then
		temp_L:="0000";
		temp_H:=cnt_H+'1';
		if(temp_H>"1001")then
		temp_H:="0000";
		end if;
		end if;
		end if;
		end if;
	cnt_L<=temp_L;
	cnt_H<=temp_H;
	end process;
process(cnt_L)
begin 
case cnt_L is
  when"0000"=>seg1<=not "1000000";
  when"0001"=>seg1<=not "1111001";
  when"0010"=>seg1<=not "0100100";
  when"0011"=>seg1<=not "0110000";
  when"0100"=>seg1<=not "0011001";
  when"0101"=>seg1<=not "0010010";
  when"0110"=>seg1<=not "0000010";
  when"0111"=>seg1<=not "1111000";
  when"1000"=>seg1<=not "0000000";
  when"1001"=>seg1<=not "0010000";
  when others=>seg1<=not "1111111";
  end case;
  end process;
 process (cnt_H)
 begin
	case cnt_H is
		when"0000"=>seg2<=not "1000000";
		when"0001"=>seg2<=not "1111001";
		when"0010"=>seg2<=not "0100100";
		when"0011"=>seg2<=not "0110000";
		when"0100"=>seg2<=not "0011001";
		when"0101"=>seg2<=not "0010010";
		when"0110"=>seg2<=not "0000010";
		when"0111"=>seg2<=not "1111000";
		when"1000"=>seg2<=not "0000000";
		when"1001"=>seg2<=not "0010000";
		when others=>seg2<=not "1111111";
		end case;
	end process;
		
 end Behavioral;

