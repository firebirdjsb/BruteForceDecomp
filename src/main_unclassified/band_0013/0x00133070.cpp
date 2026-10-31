/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03801E7B33A4A72E42C8368072073EFB889BC83FB8019D7D0C8247DEE59365AB
 * Entry: 0x00133070, Ghidra index: 3868, label: FUN_00133070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern undefined4 FUN_000ba320(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c9e8;
extern uint32_t DAT_00469948;
float10 FUN_00133070(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float10 extraout_ST0;
  
  iVar1 = *(int *)(in_EAX + 0x20);
  if (((iVar1 == 0) || (iVar1 < 0)) || (0x18 < iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_00469948 + 0x250 + iVar1 * 4);
  }
  fVar2 = (float10)*(float *)(iVar1 + 0x30 + in_ECX * 4);
  if (*(int *)(&DAT_0040c9e8 + in_ECX * 4) != 0xf) {
    iVar1 = FUN_000ba320();
    fVar2 = extraout_ST0;
    if (iVar1 == 0) {
      fVar2 = (float10)0.0;
    }
  }
  return fVar2;
}
