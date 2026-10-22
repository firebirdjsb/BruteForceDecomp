/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BB9E15B51CE3422A3B71D07FEDC8AF6A4858886A5E1DA46050ADF9F157245AC
 * Entry: 0x0031c7cc, Ghidra index: 12341, label: FUN_0031c7cc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f784;
extern uint32_t DAT_0032fdf8;
int FUN_0031c7cc(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  iVar3 = FUN_0031c099();
  if (iVar3 == 0) {
    iVar3 = -0x7787ff88;
  }
  else {
    iVar3 = FUN_0031c11a();
    if (-1 < iVar3) {
      uVar4 = 0;
      do {
        piVar1 = (int *)((int)&DAT_0032f784 + uVar4);
        uVar4 = uVar4 + 4;
        *(undefined1 *)(*piVar1 + -0x13ffef5) = 2;
      } while (uVar4 < 8);
      if ((*(byte *)(in_ECX + 8) & 1) == 0) {
        KeInitializeDpc(in_ECX + 0x1c,&LAB_0031c6f6);
      }
      HalGetInterruptVector(6,&param_1);
      KeInitializeInterrupt(&DAT_0032fdf8,&LAB_0031c6e5);
      cVar2 = KeConnectInterrupt(&DAT_0032fdf8);
      if (cVar2 == '\0') {
        iVar3 = -0x7fffbffb;
      }
      if (-1 < iVar3) {
        iVar5 = FUN_0031c0fd(1,0);
        if (iVar5 == 0) {
          iVar3 = -0x7fffbffb;
        }
        if (-1 < iVar3) {
          iVar5 = FUN_0031c0fd(0xc,0x808);
          if (iVar5 == 0) {
            iVar3 = -0x7fffbffb;
          }
          if (-1 < iVar3) {
            *(undefined4 *)(in_ECX + 0xc) = &LAB_0031c7b0;
            HalRegisterShutdownNotification((undefined4 *)(in_ECX + 0xc),1);
          }
        }
      }
    }
  }
  return iVar3;
}
