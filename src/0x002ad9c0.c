/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 881D21FAEE4889E74FA84AD21417DE312AF54429E5671354E7198F952F089E39
 * Entry: 0x002ad9c0, Ghidra index: 9693, label: FUN_002ad9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a7020;
extern char s__s__d_s_00403680[];
void FUN_002ad9c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *in_EDX;
  long lVar4;
  char local_120 [32];
  char local_100 [256];
  
  lVar4 = 0;
  cVar2 = FUN_002ac5d0();
  if (cVar2 == '\0') {
    *param_2 = in_EDX;
    return;
  }
  do {
    if (lVar4 == 0) {
      pcVar3 = in_EDX;
      do {
        cVar2 = *pcVar3;
        pcVar3[(int)(local_100 + -(int)in_EDX)] = cVar2;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      pcVar3 = _strrchr(local_100,0x23);
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
        lVar4 = _atol(pcVar3 + 1);
      }
      pcVar3 = _strrchr(in_EDX,0x2e);
      if (pcVar3 == (char *)0x0) {
        local_120[0] = '\0';
      }
      else {
        iVar1 = -(int)pcVar3;
        do {
          cVar2 = *pcVar3;
          pcVar3[(int)(local_120 + iVar1)] = cVar2;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
      }
    }
    lVar4 = lVar4 + 1;
    FUN_002eaa86(&DAT_004a7020,s__s__d_s_00403680,local_100,lVar4,local_120);
    in_EDX = &DAT_004a7020;
    cVar2 = FUN_002ac5d0();
  } while (cVar2 != '\0');
  *param_2 = &DAT_004a7020;
  return;
}
