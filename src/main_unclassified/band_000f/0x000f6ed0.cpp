/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B14C7023DCFAF116A8F1DF027CC52A984B43781B74B564266544CB96B514C523
 * Entry: 0x000f6ed0, Ghidra index: 3093, label: FUN_000f6ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee 0x002E5880 returns a guest byte through AL and reads an
 * implicit incoming ECX object address. Existing draft interface only;
 * original guest-register ABI is UNVERIFIED. */
extern undefined1 FUN_002e5880(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
int FUN_000f6ed0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  iVar1 = *piVar3;
  iVar4 = -1;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar2 = FUN_002e5880();
    if (cVar2 == '\0') {
      iVar4 = FUN_002e5bf0(0);
      iVar4 = *(int *)(iVar4 + 0x2c);
    }
    else {
      iVar4 = 0;
    }
  }
  bVar5 = *(int *)(DAT_0046995c + 0x1c) == 0;
  if (iVar1 == 0x17506391) {
    if (bVar5) {
      return 1;
    }
    return 4 - (uint)(iVar4 == 0);
  }
  if (bVar5) {
    return 0;
  }
  return (uint)(iVar4 != 0) * 2 + 2;
}
