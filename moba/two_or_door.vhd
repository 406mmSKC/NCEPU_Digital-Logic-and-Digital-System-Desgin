------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity two_or_door is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           AADDB : out  STD_LOGIC);
end two_or_door;

architecture Behavioral of two_or_door is

begin
AADDB<=A OR B;

end Behavioral;

