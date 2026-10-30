/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2CED0A6882982988C8B31C3329B915AAB866CC8AA29603CCBFABD5AE9870A60
 * Entry: 0x00319498, Ghidra index: 12224, label: FUN_00319498
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0032ffc8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00319498(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(ushort *)(in_ECX + 0x12) & 0x100) == 0) {
    FUN_00318d9f();
    iVar1 = FUN_0031670a(0x20);
    DSOUND__CDirectSoundBufferSettings_SetBufferData
              ((*(int *)(*(int *)(in_ECX + 0x88) + 0xd0) + -0xb) * iVar1 + _DAT_0032ffc8,iVar1);
    FUN_00318da3(*(undefined4 *)(*(int *)(in_ECX + 0x88) + 0xc0));
  }
  return;
}
