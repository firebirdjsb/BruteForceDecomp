/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 977BE700628755FCEBFB0717948C2D7F3D0D4436A5F710BB5F90A970EB3DBC27
 * Entry: 0x00319b4e, Ghidra index: 12244, label: FUN_00319b4e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f698;
extern uint32_t _DAT_0032f694;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00319b4e(float param_1)

{
  undefined4 *extraout_ECX;
  float *pfVar1;
  undefined8 uVar2;
  
  pfVar1 = (float *)&DAT_0032f698;
  do {
    uVar2 = FUN_00319a67(_DAT_0032f694 * *pfVar1 * param_1);
    *extraout_ECX = (int)uVar2;
    pfVar1 = (float *)((int)((ulonglong)uVar2 >> 0x20) + 0x14);
  } while ((int)pfVar1 < 0x32f6e8);
  return;
}
