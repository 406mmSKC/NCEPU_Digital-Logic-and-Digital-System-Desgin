library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity THE_D_TRIGGER is
    Port ( CP : in  STD_LOGIC;
           D : in  STD_LOGIC;
           Q : out STD_LOGIC;
           NQ : out  STD_LOGIC);
end THE_D_TRIGGER;

architecture Behavioral of THE_D_TRIGGER is--此处由于报告要求使用结构化描述，故如此编写
signal g3,g4,sq,snq:std_logic;
component nand_door is
port (a:in std_logic;
		b:in std_logic;
		nab:out std_logic);
end component;
begin
U1:nand_door port map(a=>CP,b=>D,nab=>g4);
U2:nand_door port map (a=>CP,b=>g4,nab=>g3);
U3:nand_door port map(a=>g3,b=>sq,nab=>snq);
U4:nand_door port map(a=>snq,b=>g4,nab=>sq);
Q<=sq;
NQ<=snq;

end Behavioral;


