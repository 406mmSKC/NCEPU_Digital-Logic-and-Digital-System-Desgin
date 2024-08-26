
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity and_three is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           ABC : out  STD_LOGIC);
end and_three;

architecture Behavioral of and_three is

begin

ABC<=A AND B AND C;
end Behavioral;

