
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity or_two is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           ADD_TWO : out  STD_LOGIC);
end or_two;

architecture Behavioral of or_two is

begin
ADD_TWO<=A OR B;

end Behavioral;

