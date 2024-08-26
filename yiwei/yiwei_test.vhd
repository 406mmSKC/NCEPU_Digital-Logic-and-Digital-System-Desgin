
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY yiwei_test IS
END yiwei_test;
 
ARCHITECTURE behavior OF yiwei_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT yiwei
    PORT(
         CP : IN  std_logic;
         Rd : IN  std_logic;
         Q : OUT  std_logic_vector(2 downto 0);
         NQ : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CP : std_logic := '0';
   signal Rd : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(2 downto 0);
   signal NQ : std_logic_vector(2 downto 0);
   -- No clocks detected in port list. Replace CP below with 
   -- appropriate port name 
 
   constant CP_period : time := 30 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: yiwei PORT MAP (
          CP => CP,
          Rd => Rd,
          Q => Q,
          NQ => NQ
        );

   -- Clock process definitions
   CP_process :process
   begin
		CP <= '0';
		wait for CP_period/2;
		CP <= '1';
		wait for CP_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		Rd<='0';
      wait for 100 ns;	
Rd<='1';
		wait for CP_period*10;
		wait for CP_period*10;
		wait for CP_period*10;
		wait for CP_period*10;
		wait for CP_period*10;
		wait for CP_period*10;
		wait for CP_period*10;
      wait for CP_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
