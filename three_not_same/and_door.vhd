
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity and_door is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           AANDB : out  STD_LOGIC);
end and_door;

architecture Behavioral of and_door is
signal d:std_logic_vector(1 downto 0);
begin
d<=A&B;
process(d)
begin
case d is
when "00"=> AANDB<='0';
when "11"=> AANDB<='1';
WHEN "01"=> AANDB<='0';
WHEN "10"=> AANDB<='0';
WHEN OTHERS=> AANDB<='0';
end case;
END process;
end Behavioral;

