/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C52F374CC9FDF8D74A720F37D6F76A7F4DAB11DBBE3C47D1EF93A3F4881B8D0B
 * Entry: 0x001f0de0, Ghidra index: 6983, label: FUN_001f0de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callback/address references (not an ABI verification).
 * Original x86 register, stack and indirect call contracts remain ABI_UNVERIFIED. */
extern undefined4 FUN_001f0cd0(void);
extern undefined4 FUN_001f0ce0(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0001fffe_2_003bc758;
extern uint32_t PTR_XBE_FILE_HEADER_003bc750;
uint FUN_001f0de0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *unaff_EDI;
  undefined1 local_4 [4];
  
  FUN_001f0cf0(PTR_XBE_FILE_HEADER_003bc750);
  FUN_001f0cf0(PTR_LAB_0001fffe_2_003bc758);
  *(undefined4 *)(unaff_EDI + 4) = 0;
  *unaff_EDI = 0;
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0x244) = 0xffffffff;
  *(undefined4 *)(unaff_EDI + 0x240) = 0xffffffff;
  iVar3 = 0;
  piVar4 = (int *)(unaff_EDI + 0x18);
  do {
    iVar1 = XAPILIB__CreateEventA(0,0,0,0);
    *piVar4 = iVar1;
    if (iVar1 == 0) {
      return 0x80004005;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 7);
  iVar3 = XAPILIB__CreateThread(0,0x3000,FUN_001f0cd0,unaff_EDI,0,local_4);
  *(int *)(unaff_EDI + 0xc) = iVar3;
  if (iVar3 != 0) {
    iVar3 = XAPILIB__CreateThread(0,0x3000,FUN_001f0ce0,unaff_EDI,0,local_4);
    *(int *)(unaff_EDI + 0x14) = iVar3;
    if (iVar3 != 0) {
      uVar2 = XAPILIB__CreateThread(0,0x4000,&LAB_001f0cc0,unaff_EDI,0,local_4);
      *(undefined4 *)(unaff_EDI + 0x10) = uVar2;
      return (*(int *)(unaff_EDI + 0x14) != 0) - 1 & 0x80004005;
    }
  }
  return 0x80004005;
}
