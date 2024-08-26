
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity nand_door is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           NABC : out  STD_LOGIC);
end nand_door;

architecture Behavioral of nand_door is

begin
NABC<=not (A AND B AND C);

end Behavioral;

