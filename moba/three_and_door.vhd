
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity three_and_door is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           ABC : out  STD_LOGIC);
end three_and_door;

architecture Behavioral of three_and_door is

begin
ABC<=A AND B AND C;

end Behavioral;

