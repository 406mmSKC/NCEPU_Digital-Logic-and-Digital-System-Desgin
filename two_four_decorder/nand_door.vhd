library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity nand_door is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           S : out  STD_LOGIC);
end nand_door;

architecture Behavioral of nand_door is

begin
S<=not(A and B and C);

end Behavioral;

