
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity two_and_door is
 Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           AB : out  STD_LOGIC);
end two_and_door;

architecture Behavioral of two_and_door is

begin

AB<=A and B;

end Behavioral;

