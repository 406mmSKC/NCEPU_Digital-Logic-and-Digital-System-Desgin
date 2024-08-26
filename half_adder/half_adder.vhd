
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity half_adder is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           F : out  STD_LOGIC;
           CO : out  STD_LOGIC);
end half_adder;

architecture Behavioral of half_adder is
component xor_door is
Port (A :in STD_LOGIC;
      B :in STD_LOGIC;
		F :out STD_LOGIC);
		end component;
component and_door is
Port (A:in STD_LOGIC;
B:in STD_LOGIC;
CO :out STD_LOGIC);
end component;
begin
U1: xor_door PORT MAP(A=>A,B=>B,F=>F);
U2: and_door PORT MAP(A=>A,B=>B,CO=>CO);

end Behavioral;

