
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity xor_door is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           F : out  STD_LOGIC);
end xor_door;

architecture Behavioral of xor_door is

begin
F<=A xor B;

end Behavioral;

