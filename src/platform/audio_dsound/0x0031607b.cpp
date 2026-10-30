/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1855593F73EA82CF9454F369ED6380F3C34C69DA7CA134567E8A1375D544F9F7
 * Entry: 0x0031607b, Ghidra index: 12127, label: CMcpxAPU_ServiceDeferredCommandsLow
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__CMcpxAPU_ServiceDeferredCommandsLow(void)

{
  undefined4 ****ppppuVar1;
  undefined4 ****ppppuVar2;
  undefined4 *****pppppuVar3;
  int in_ECX;
  undefined4 ****local_c;
  undefined4 ****local_8;
  
  local_8 = local_c;
  local_c = local_c;
  FUN_003118f0();
  ppppuVar1 = (undefined4 ****)(in_ECX + 0x6e8);
  while ((undefined4 ****)*ppppuVar1 != ppppuVar1) {
    FUN_00315aac(&local_c,*ppppuVar1);
  }
  while (pppppuVar3 = (undefined4 *****)FUN_003118c0(local_c), pppppuVar3 != &local_c) {
    if (((uint)pppppuVar3[2] & 4) == 0) {
      pppppuVar3[2] = (undefined4 ****)((uint)pppppuVar3[2] & 0xfffffffd);
    }
    else {
      *pppppuVar3 = ppppuVar1;
      ppppuVar2 = *(undefined4 *****)(in_ECX + 0x6ec);
      pppppuVar3[1] = ppppuVar2;
      *ppppuVar2 = pppppuVar3;
      (*pppppuVar3)[1] = pppppuVar3;
    }
    FUN_00311923();
    (*(code *)(*pppppuVar3[3])[8])(pppppuVar3[4],pppppuVar3[5]);
    FUN_003118f0();
  }
  FUN_00311923();
  return;
}
