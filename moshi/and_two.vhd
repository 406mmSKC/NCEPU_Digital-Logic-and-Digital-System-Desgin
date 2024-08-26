
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity and_two is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           AB : out  STD_LOGIC);
end and_two;

architecture Behavioral of and_two is

begin
AB<=A AND B;

end Behavioral;

