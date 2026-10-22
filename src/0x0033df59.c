/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6D0981EEFC058FD7BC235ED6D63689C931D07B81A87A083BC368B66C6D7DEF6
 * Entry: 0x0033df59, Ghidra index: 12603, label: FUN_0033df59
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0a1c;
extern uint32_t DAT_004b0a50;
undefined4 FUN_0033df59(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined2 local_14;
  ushort local_12;
  ushort local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  
  if (0x27 < *param_2) {
    XAPILIB__FileTimeToSystemTime(param_3,&local_14);
    uVar1 = FUN_0033df31(param_1,*param_2,"%s, %02d %s %4d %02d:%02d:%02d GMT",
                         &DAT_004b0a50 + (uint)local_10 * 4,local_e,
                         &DAT_004b0a1c + (uint)local_12 * 4,local_14,local_c,local_a,local_8);
    if (-1 < (int)uVar1) {
      *param_2 = uVar1;
      return 0;
    }
  }
  *param_2 = 0x28;
  return 0x8007007a;
}
