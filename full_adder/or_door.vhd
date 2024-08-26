
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity or_door is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : out  STD_LOGIC);
end or_door;

architecture Behavioral of or_door is

begin
C<=A or B;

end Behavioral;

