
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT clock
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         seg1 : OUT  std_logic_vector(6 downto 0);
         seg2 : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal seg1 : std_logic_vector(6 downto 0);
   signal seg2 : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: clock PORT MAP (
          clk => clk,
          rst => rst,
          seg1 => seg1,
          seg2 => seg2
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for 10ns;
		clk <= '1';
		wait for 10ns;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		rst<='0';
      wait for 100 ns;	
rst<='1';

      -- insert stimulus here 

      wait;
   end process;

END;
