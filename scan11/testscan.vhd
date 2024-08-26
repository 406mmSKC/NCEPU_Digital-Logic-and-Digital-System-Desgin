
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testscan IS
END testscan;
 
ARCHITECTURE behavior OF testscan IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT scan11
    PORT(
         CP : IN  std_logic;
         Rd : IN  std_logic;
         X : IN  std_logic;
         Z : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CP : std_logic := '0';
   signal Rd : std_logic := '0';
   signal X : std_logic := '0';

 	--Outputs
   signal Z : std_logic;
   -- No clocks detected in port list. Replace CP below with 
   -- appropriate port name 
 
   constant CP_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: scan11 PORT MAP (
          CP => CP,
          Rd => Rd,
          X => X,
          Z => Z
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

      wait for CP_period;
Rd<='1';wait for CP_period;
		
		X<='1';wait for CP_period;
		X<='0';wait for CP_period;
		X<='0';wait for CP_period;
		X<='1';wait for CP_period;
		X<='0';wait for CP_period;
		X<='1';wait for CP_period/2;
		X<='0';wait for CP_period;
      -- insert stimulus here 

      wait;
   end process;

END;
