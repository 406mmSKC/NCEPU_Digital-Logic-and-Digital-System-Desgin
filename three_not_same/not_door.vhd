
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity not_door is
    Port ( A : in  STD_LOGIC;
           NA : out  STD_LOGIC);
end not_door;

architecture Behavioral of not_door is

begin
NA<=NOT A;

end Behavioral;

