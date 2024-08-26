
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity yiwei is
    Port ( CP : in  STD_LOGIC;
	 Rd:IN STD_LOGIC;
           Q : out  STD_LOGIC_vector(2 downto 0);
           NQ : out  STD_LOGIC_vector(2 downto 0));
end yiwei;

architecture Behavioral of yiwei is
SIGNAL one:std_logic;
component and_door is
port (A:in std_logic;
B:in std_logic;
AB:out std_logic);
END COMPONENT ;
component Dtrigger is
port(CP:IN STD_LOGIC;
Rd:in std_logic;
D:IN STD_LOGIC;
Q:out STD_LOGIC;
NQ:out STD_LOGIC);
END COMPONENT;
signal sq,nsq:std_logic_vector(2 downto 0);
begin
U1: and_door port map(A=>nsq(2),B=>nsq(1),AB=>one);
U2: Dtrigger port map(CP=>CP,Rd=>Rd,D=>one,Q=>sq(2),NQ=>nsq(2));
U3: Dtrigger port map(CP=>CP,Rd=>Rd,D=>sq(2),Q=>sq(1),NQ=>nsq(1));
U4: Dtrigger port map(CP=>CP,Rd=>Rd,D=>sq(1),Q=>sq(0),NQ=>nsq(0));
Q<=sq;
NQ<=nsq;
end Behavioral;

