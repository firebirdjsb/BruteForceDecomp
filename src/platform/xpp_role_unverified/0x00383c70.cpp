/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2362705D4E9188CFC6C6085D7DB2BEC4CEE49A6548430B314DE370A075FB1AE7
 * Entry: 0x00383c70, Ghidra index: 13633, label: FUN_00383c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412868;
extern uint32_t DAT_004128b4;
extern uint32_t DAT_004128b8;
void FUN_00383c70(void)

{
  int iVar1;
  
  iVar1 = FUN_00380fc4();
  if (DAT_004128b4 == 0) {
    FUN_00380fb1(iVar1 + 8);
  }
  else if (DAT_004128b4 == 1) {
    thunk_FUN_00382218(0x80000600,DAT_00412868);
  }
  else if (DAT_004128b4 == 2) {
    FUN_0038264a(0x80000600,DAT_00412868);
  }
  else if ((DAT_004128b4 == 3) && (DAT_004128b8 != 0)) {
    FUN_00383c3a(DAT_004128b8,0);
    DAT_004128b8 = 0;
  }
  return;
}
