/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FE1DEA30C9F44C1D70C661C23ED146E57353C91F940C15088B7D35879CA7A1D
 * Entry: 0x0029f810, Ghidra index: 9490, label: FUN_0029f810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469864;
extern uint32_t DAT_00469868;
extern uint32_t *DAT_0046986c;
extern uint32_t DAT_00469870;
extern char s_23_23_IAlchemy_00403bf8[];
extern char s_23_23_IFxEffectLibrary_004032d0[];
extern char s_23_23_IFxRuntime_00403c08[];
undefined1 FUN_0029f810(void)

{
  char cVar1;
  
  cVar1 = FUN_0029f6a0();
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_00238080(s_23_23_IFxRuntime_00403c08,&DAT_00469864);
  FUN_00238080(s_23_23_IAlchemy_00403bf8,&DAT_00469868);
  FUN_00238080(s_23_23_IFxEffectLibrary_004032d0,&DAT_0046986c);
  DAT_00469870 = DAT_00469868;
  (**(code **)(*DAT_00469864 + 0x10))(DAT_00469864,DAT_00469868);
  (**(code **)(*DAT_00469864 + 0xc))(DAT_00469864,DAT_00469868);
  (**(code **)(*DAT_00469864 + 0x14))(DAT_00469864,DAT_0046986c);
  (**(code **)(*DAT_0046986c + 0xc))(DAT_0046986c,DAT_00469868,DAT_00469868);
  return 1;
}
