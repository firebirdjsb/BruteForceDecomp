/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDA5BB6CD30EDAD9822C91F0FD2438DD73841C7752D3E3377A6D8F9169696AA9
 * Entry: 0x00047f20, Ghidra index: 567, label: FUN_00047f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_00040510(undefined4 param_1);
extern undefined4 FUN_00040280(undefined4 param_1);

extern uint32_t DAT_0046cfd8;
void FUN_00047f20(void)

{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 uVar3;
  
  if (((*(uint *)(unaff_ESI + 0x24) & 6) != 0) && (-1 < (char)*(uint *)(unaff_ESI + 0x24))) {
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    if ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0 < 0.7) {
      *(uint *)(unaff_ESI + 0x24) = *(uint *)(unaff_ESI + 0x24) & 0xfffffff9;
    }
  }
  uVar1 = *(uint *)(unaff_ESI + 0x24);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 4) == 0) goto LAB_00047fbc;
    *(uint *)(unaff_ESI + 0x24) = uVar1 & 0xfffffffb;
    if (-1 < (char)(uVar1 & 0xfffffffb)) {
      uVar3 = 0x17;
      goto LAB_00047fa3;
    }
    iVar2 = FUN_00040510(0x21);
  }
  else {
    *(uint *)(unaff_ESI + 0x24) = uVar1 & 0xfffffffd;
    if ((char)(uVar1 & 0xfffffffd) < '\0') {
      iVar2 = FUN_00040510(0x22);
    }
    else {
      uVar3 = 0x18;
LAB_00047fa3:
      iVar2 = FUN_00040280(uVar3);
    }
  }
  if (iVar2 == 1) {
    *(undefined4 *)(unaff_ESI + 8) = 5;
    return;
  }
LAB_00047fbc:
  *(undefined4 *)(unaff_ESI + 8) = 3;
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  *(float *)(unaff_ESI + 4) = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 3.0;
  return;
}
