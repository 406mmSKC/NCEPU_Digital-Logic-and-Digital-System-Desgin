
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity two_four_decorder is
 Port ( E : in  STD_LOGIC;
           A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           Y : out std_logic_vector(3 downto 0));
end two_four_decorder;

architecture Behavioral of two_four_decorder is
signal NE,NOA,NB:std_logic;
component not_door  is
	PORT (A:in std_logic;
	NA:out std_logic);
end component;
component nand_door  is
	PORT (A:in std_logic;
	B:in std_logic;
	C:in std_logic;
	S:out std_logic);
end component;
begin
U1:not_door port map(A=>E,NA=>NE);
U2:not_door port map (A=>A,NA=>NOA);
U3:not_door port map (A=>B,NA=>NB);
U4:nand_door port map(A=>NE,B=>NOA,C=>NB,S=>Y(0));
U5:nand_door port map(A=>NE,B=>NOA,C=>B,S=>Y(2));
U6:nand_door port map(A=>NE,B=>A,C=>NB,S=>Y(1));
U7:nand_door port map(A=>NE,B=>A,C=>B,S=>Y(3));
end Behavioral;