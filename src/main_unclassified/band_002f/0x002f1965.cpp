/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 579BA8CD57738C9402E2ABFA80D5D506787DCCBF8821B70F74D6965CB75B3CA2
 * Entry: 0x002f1965, Ghidra index: 10783, label: FUN_002f1965
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f574;
extern uint32_t DAT_0040f576;
extern uint32_t DAT_0040f590;
extern uint32_t _DAT_0040f590;
extern uint32_t _DAT_0040f594;
extern uint32_t _DAT_0040f598;
extern uint32_t _DAT_0040f59c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_002f1965(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  ___dtold(&local_10,&param_1);
  _DAT_0040f598 = FUN_002f2240(local_10,uStack_c,uStack_8,0x11,0,&DAT_0040f574);
  _DAT_0040f590 = (int)DAT_0040f576;
  _DAT_0040f594 = (int)DAT_0040f574;
  _DAT_0040f59c = 0x40f578;
  return &DAT_0040f590;
}
