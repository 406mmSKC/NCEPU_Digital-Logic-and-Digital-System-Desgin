
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY jiepai IS
END jiepai;
 
ARCHITECTURE behavior OF jiepai IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT yiwei
    PORT(
         CP : IN  std_logic;
         Q2 : INOUT  std_logic;
         NQ2 : INOUT  std_logic;
         Q1 : INOUT  std_logic;
         NQ1 : INOUT  std_logic;
         Q0 : INOUT  std_logic;
         NQ0 : INOUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CP : std_logic := '1';

	--BiDirs
   signal Q2 : std_logic:='0';
   signal NQ2 : std_logic:='1';
   signal Q1 : std_logic:='0';
   signal NQ1 : std_logic:='1';
   signal Q0 : std_logic:='0';
   signal NQ0 : std_logic:='1';
   -- No clocks detected in port list. Replace clk below with 
   -- appropriate port name 
 signal clk:std_logic:='0';
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: yiwei PORT MAP (
          CP => CP,
          Q2 => Q2,
          NQ2 => NQ2,
          Q1 => Q1,
          NQ1 => NQ1,
          Q0 => Q0,
          NQ0 => NQ0
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
CP<='1';WAIT FOR clk_period*10;
CP<='0';WAIT FOR clk_period*10;
CP<='1';WAIT FOR clk_period*10;
CP<='0';WAIT FOR clk_period*10;
CP<='1';WAIT FOR clk_period*10;
CP<='0';WAIT FOR clk_period*10;
CP<='1';WAIT FOR clk_period*10;
      wait;
   end process;

END;
