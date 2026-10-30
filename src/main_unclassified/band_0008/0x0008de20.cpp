/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 060072C3728292EA6FD8F5097E04C3A8D42796817088A8585B6DB60D43B9E03F
 * Entry: 0x0008de20, Ghidra index: 1722, label: FUN_0008de20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0008de7c) */

extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern undefined4 FUN_0008f200(void);
extern undefined4 FUN_0023a1c0(undefined4 param_1);

bool FUN_0008de20(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *unaff_ESI;
  
  pcVar2 = unaff_ESI;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(unaff_ESI,(int)pcVar2 - (int)(unaff_ESI + 1));
  cVar1 = FUN_0008f200(param_1 + 4);
  if (cVar1 != '\0') {
    FUN_0023a1c0();
  }
  return cVar1 != '\0';
}
