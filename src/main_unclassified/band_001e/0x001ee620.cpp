/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04F606ACB02141C79B2746B6530AC2A75262F6749A080C285B90A84C8706329B
 * Entry: 0x001ee620, Ghidra index: 6959, label: FUN_001ee620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern char s_Parameters_004071bc[];
void FUN_001ee620(void)

{
  int iVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  pcVar8 = s_Parameters_004071bc;
  bVar2 = false;
  FUN_002e5920(s_Parameters_004071bc);
  iVar3 = FUN_002e4a30(pcVar8);
  iVar7 = 1;
  do {
    iVar1 = in_EAX + iVar7 * 0x18;
    if ((*(char *)(iVar1 + 0x5630) != '\0') && (*(char *)(iVar1 + 0x5633) != '\0')) {
      iVar6 = 1;
      piVar4 = (int *)(in_EAX + 0x160);
      do {
        if ((((char)piVar4[-1] != '\0') || (*piVar4 != -1)) && (piVar4[0x143] == iVar7))
        goto LAB_001ee6cf;
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 0x166;
      } while (iVar6 < 9);
      *(undefined1 *)(iVar1 + 0x5630) = 0;
      if (iVar7 == 1) {
        uVar5 = *(uint *)(iVar3 + 0x21c) & 0xfffffffe;
LAB_001ee6c4:
        *(uint *)(iVar3 + 0x21c) = uVar5;
      }
      else {
        if (iVar7 == 2) {
          uVar5 = *(uint *)(iVar3 + 0x21c) & 0xfffffffd;
          goto LAB_001ee6c4;
        }
        if (iVar7 == 3) {
          uVar5 = *(uint *)(iVar3 + 0x21c) & 0xfffffffb;
          goto LAB_001ee6c4;
        }
      }
      bVar2 = true;
    }
LAB_001ee6cf:
    iVar7 = iVar7 + 1;
    if (3 < iVar7) {
      if (bVar2) {
        FUN_001ece40(&DAT_0046d064);
      }
      return;
    }
  } while( true );
}
