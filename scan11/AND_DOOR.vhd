
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity AND_DOOR is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           AB : out  STD_LOGIC);
end AND_DOOR;

architecture Behavioral of AND_DOOR is

begin

AB<=A AND B;
end Behavioral;

