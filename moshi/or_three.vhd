
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity or_three is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           ADD_THREE : out  STD_LOGIC);
end or_three;

architecture Behavioral of or_three is

begin

ADD_THREE<=A OR B OR C;
end Behavioral;

