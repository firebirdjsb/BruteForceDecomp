/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04C1F758E25A8C1703159F03F540C163F00B1035D5E07D08942C50979AE5D5AE
 * Entry: 0x0026ab50, Ghidra index: 8755, label: FUN_0026ab50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003927d8;
undefined4 *
FUN_0026ab50(undefined4 *param_1,int param_2,undefined4 param_3,float param_4,undefined4 param_5)

{
  undefined1 local_10 [16];
  
  *param_1 = PTR_LAB_003927d8;
  if ((param_2 != 0) && (param_2 != -1)) {
    param_1[1] = param_2;
    FUN_0001fc70(local_10,param_3,param_4 * 57.295776);
    FUN_002333b0(local_10);
    FUN_00234f00();
    FUN_002333b0(param_1 + 8);
    FUN_002334b0();
    FUN_002334b0();
    FUN_002334b0();
    FUN_002334b0();
    FUN_002339d0(param_1 + 2);
    param_1[6] = param_5;
    param_1[7] = 0;
  }
  return param_1;
}
