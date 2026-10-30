/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E58AAE5AECC95E1E2B76DD9440818975BECE57E52F5B9B1EE027E1C3E9FB313B
 * Entry: 0x000f2330, Ghidra index: 3019, label: FUN_000f2330
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
int FUN_000f2330(void)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = -1;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar5 = FUN_002e5bf0(0);
      iVar5 = *(int *)(iVar5 + 0x2c);
    }
    else {
      iVar5 = 0;
    }
  }
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    pbVar3 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar2);
    if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) && (*(int *)(pbVar3 + 8) == iVar5)) {
      iVar4 = iVar4 + 1;
    }
  } while (iVar2 < 8);
  return iVar4;
}
