library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity and_door is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           CO : out  STD_LOGIC);
end and_door;

architecture Behavioral of and_door is

begin
co<=A and B;

end Behavioral;

