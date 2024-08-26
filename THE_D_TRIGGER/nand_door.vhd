
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity nand_door is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           nab : out  STD_LOGIC);
end nand_door;

architecture Behavioral of nand_door is

begin
nab<=not(a and b);

end Behavioral;


