/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B820192A93370CA42FD6E90DFDF3FA50DEC665E952C9E717FF5A4ADC85A6F9CC
 * Entry: 0x0029f6a0, Ghidra index: 9489, label: FUN_0029f6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00390f48;
extern uint32_t PTR_LAB_00390fe8;
undefined4 FUN_0029f6a0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x182832e;
    local_4 = 0x182832e;
    *piVar1 = (int)&PTR_LAB_00390f48;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x76f7e1b;
    local_4 = 0xf89081e5;
    *piVar1 = (int)&PTR_LAB_00390fe8;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_002381e0();
  FUN_002381e0();
  FUN_002381e0();
  FUN_002b1bb0();
  FUN_002a6040();
  FUN_0029ec90();
  FUN_0029e820();
  FUN_0029e3b0();
  FUN_0029d5f0();
  FUN_0029dba0();
  FUN_0029dae0();
  FUN_0029db40();
  FUN_002aab10();
  FUN_002aab70();
  FUN_002aabd0();
  FUN_002a8fc0();
  FUN_002a8f60();
  FUN_002a8740();
  FUN_002a9cc0();
  FUN_002b1260();
  FUN_002a05a0();
  FUN_002aec30();
  FUN_002aa510();
  FUN_002add80();
  FUN_002af3b0();
  FUN_002b0970();
  FUN_002a91b0();
  FUN_002a2c10();
  FUN_002a97a0();
  FUN_002b0130();
  FUN_002a42d0();
  FUN_002ae3a0();
  return 1;
}
