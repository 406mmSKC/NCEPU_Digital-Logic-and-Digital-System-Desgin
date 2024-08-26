
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity moshi is
    Port ( CP : in  STD_LOGIC;
           Rd : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR(3 DOWNTO 0);
           NQ : out  STD_LOGIC_VECTOR(3 DOWNTO 0));
end moshi;

architecture Behavioral of moshi is
component and_three is
port(A:IN STD_LOGIC;
B:IN STD_LOGIC;
C:IN STD_LOGIC;
ABC:OUT std_logic);
end component;
component or_three is 
port (A:IN STD_LOGIC;
B:IN STD_LOGIC;
C:IN STD_LOGIC;
ADD_THREE:OUT STD_LOGIC);
END COMPONENT;
component and_two is
port(A:IN STD_LOGIC;
B:IN STD_LOGIC;
AB:OUT std_logic);
end component;
component or_two is 
port (A:IN STD_LOGIC;
B:IN STD_LOGIC;
ADD_TWO:OUT STD_LOGIC);
END COMPONENT;
component Dtrigger is
port(Rd:in std_logic;
CP:in std_logic;
D:in std_logic;
Q:out std_logic;
NQ:out std_logic);
end component;
SIGNAL D0,D1,D2,D3,D11,D12,D21,D22,D23,D01,D02,D31,D32:STD_LOGIC;
SIGNAL SQ,NSQ:STD_LOGIC_VECTOR(3 DOWNTO 0);
begin
U0:Dtrigger port map(Rd=>Rd,CP=>CP,D=>D0,Q=>SQ(0),NQ=>NSQ(0));
U1:Dtrigger port map(Rd=>Rd,CP=>CP,D=>D1,Q=>SQ(1),NQ=>NSQ(1));
U2:Dtrigger port map(Rd=>Rd,CP=>CP,D=>D2,Q=>SQ(2),NQ=>NSQ(2));
U3:Dtrigger port map(Rd=>Rd,CP=>CP,D=>D3,Q=>SQ(3),NQ=>NSQ(3));
U00:or_two port map (A=>D01,B=>D02,ADD_TWO=>D0);
U10:or_two port map (A=>D11,B=>D12,ADD_TWO=>D1);
U30:or_two port map (A=>D31,B=>D32,ADD_TWO=>D3);
U20: or_three port map(A=>D21,B=>D22,C=>D23,ADD_THREE=>D2);
U01:and_two port map(A=>NSQ(1),B=>NSQ(0),AB=>D01);
U02: and_two PORT MAP(A=>NSQ(3),B=>NSQ(0),AB=>D02);
U11: and_three PORT MAP(A=>NSQ(1),B=>SQ(0),C=>NSQ(3),ABC=>D11);
U12: and_three port map (A=>NSQ(3),B=>SQ(1),C=>NSQ(0),ABC=>D12);
U21: and_three port map (A=>NSQ(2),B=>SQ(1),C=>SQ(0),ABC=>D21);
U22:and_three port map (A=>NSQ(3),B=>SQ(2),C=>NSQ(1),ABC=>D22);
U23 :and_three port map (A=>NSQ(3),B=>SQ(2),C=>NSQ(0),ABC=>D23);
U31: and_three port map (A=>SQ(2),B=>SQ(1),C=>SQ(0),ABC=>D31);
U32 :and_three port map (A=>SQ(3),B=>NSQ(2),C=>NSQ(0),ABC=>D32);
Q<=SQ;
NQ<=NSQ;
end Behavioral;

