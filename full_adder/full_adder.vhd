

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity full_adder is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C1 : in  STD_LOGIC;
           S : out  STD_LOGIC;
           CC : out  STD_LOGIC);
end full_adder;

architecture Behavioral of full_adder is
signal AB: STD_LOGIC;
signal AB2: STD_LOGIC;
signal AC: STD_LOGIC;
component xor_door is
PORT (A:in STD_LOGIC;
B:in STD_LOGIC;
C:out STD_LOGIC);
end component;
component and_door is
PORT (A:in STD_LOGIC;
B:in STD_LOGIC;
C:out STD_LOGIC);
end component;
component or_door is
PORT (A:in STD_LOGIC;
B:in STD_LOGIC;
C:out STD_LOGIC);
end component;
begin
U1:xor_door PORT MAP(A=>A,B=>B,C=>AB);
U2:xor_door PORT MAP(A=>AB,B=>C1,C=>S);
U3:and_door PORT MAP(A=>A,B=>B,C=>AB2);
U4:and_door PORT MAP(A=>C1,B=>AB,C=>AC);
U5:or_door PORT MAP (A=>AB2,B=>AC,C=>CC);

end Behavioral;

