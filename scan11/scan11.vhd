
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity scan11 is
    Port ( CP : in  STD_LOGIC;
           Rd : in  STD_LOGIC;
           X : in  STD_LOGIC;
           Z : out  STD_LOGIC);
end scan11;

architecture Behavioral of scan11 is
COMPONENT AND_DOOR IS
PORT(A:IN STD_LOGIC;
B:IN STD_LOGIC;
AB:OUT STD_LOGIC);
END COMPONENT;
COMPONENT Dtrigger is
port (CP:IN STD_LOGIC;
Rd:in std_logic;
D:in std_logic;
Q:out std_logic;
NQ:OUT STD_LOGIC);
END COMPONENT;
SIGNAL SZ,D0,NQ0,Q0:STD_LOGIC;
begin
U1:AND_DOOR port map(A=>X,B=>NQ0,AB=>D0);
U2:AND_DOOR PORT MAP(A=>X,B=>Q0,AB=>SZ);
U0:Dtrigger port map(CP=>CP,Rd=>Rd,D=>D0,Q=>Q0,NQ=>NQ0);
Z<=SZ;
end Behavioral;

