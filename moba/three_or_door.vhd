
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity three_or_door is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           AADDBADDC : out  STD_LOGIC);
end three_or_door;

architecture Behavioral of three_or_door is

begin
AADDBADDC<=A OR B OR C;

end Behavioral;

