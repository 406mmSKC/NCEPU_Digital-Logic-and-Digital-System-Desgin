
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity three_not_same is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           F : out  STD_LOGIC);
end three_not_same;

architecture Behavioral of three_not_same is
signal noa,nob,noc,abc,noabc:std_logic;
component not_door is
port (A:in std_logic;
NA:OUT std_logic);
end component;
component nand_door is
port (A:in std_logic;
B:IN STD_LOGIC;
C: IN STD_LOGIC;
NABC:OUT STD_LOGIC);
end component;
component and_door is
port (A:in std_logic;
B:IN STD_LOGIC;
AANDB:OUT std_logic);
end component;
begin
U1:not_door port map(A=>A,NA=>noa);
U2:not_door port map(A=>B,NA=>nob);
U3:not_door port map(A=>C,NA=>noc);
U4:nand_door port map(A=>A,B=>B,C=>C,NABC=>abc);
U5:nand_door port map(A=>noa,B=>nob,C=>noc,NABC=>noabc);
U6:and_door port map (A=>abc,B=>noabc,AANDB=>F);
end Behavioral;

