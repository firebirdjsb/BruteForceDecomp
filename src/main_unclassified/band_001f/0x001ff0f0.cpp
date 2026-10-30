/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FAF69649150E6198F4DEE49DF5E818A03B0A2D244500B1949F7768E59975035
 * Entry: 0x001ff0f0, Ghidra index: 7244, label: FUN_001ff0f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
extern uint32_t PTR_LAB_003a4f50;
void FUN_001ff0f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined **ppuStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined **ppuStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined **local_b4;
  undefined **ppuStack_a0;
  undefined **local_8c;
  undefined **local_78;
  undefined **local_64;
  undefined **ppuStack_50;
  undefined **local_3c;
  undefined **local_28;
  undefined **local_14;
  
  if ((*(byte *)((int)in_ECX + 0x3d) & 0x10) == 0) {
    cVar1 = FUN_001feb60();
    while (cVar1 != '\0') {
      switch(uRam00000008) {
      case 2:
        (**(code **)(*in_ECX + 0x44))();
        uStack_e4 = *(undefined4 *)(param_1 + 0xc);
        uStack_e0 = *(undefined4 *)(param_1 + 0x10);
        iStack_e8 = (int)(char)in_ECX[0xf];
        ppuStack_f0 = &PTR_LAB_003a3fb4;
        uStack_ec = 4;
        FUN_001ff0a0(&ppuStack_f0);
        ppuStack_f0 = &PTR_LAB_003a4f50;
        goto LAB_001ff42a;
      case 3:
        (**(code **)(*in_ECX + 0x48))();
        uStack_d0 = *(undefined4 *)(param_1 + 0xc);
        uStack_cc = *(undefined4 *)(param_1 + 0x10);
        iStack_d4 = (int)(char)in_ECX[0xf];
        ppuStack_dc = &PTR_LAB_003a3fb4;
        uStack_d8 = 5;
        FUN_001ff0a0(&ppuStack_dc);
        ppuStack_dc = &PTR_LAB_003a4f50;
        goto LAB_001ff42a;
      case 5:
        if ((*(byte *)((int)in_ECX + 0x3d) & 1) == 0) {
          (**(code **)(*in_ECX + 0x44))();
          uVar2 = FUN_001fdf20(4,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          ppuStack_a0 = &PTR_LAB_003a4f50;
        }
        else {
          (**(code **)(*in_ECX + 0x48))();
          uVar2 = FUN_001fdf20(5,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          ppuStack_50 = &PTR_LAB_003a4f50;
        }
LAB_001ff42a:
        FUN_001feac0();
        break;
      case 0x25:
        if ((*(byte *)((int)in_ECX + 0x3d) & 1) != 0) {
          uVar2 = FUN_001fdf20(0xb,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          local_c8 = &PTR_LAB_003a4f50;
          goto LAB_001ff42a;
        }
        break;
      case 0x26:
        if ((*(byte *)((int)in_ECX + 0x3d) & 1) != 0) {
          uVar2 = FUN_001fdf20(0xc,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          local_78 = &PTR_LAB_003a4f50;
          goto LAB_001ff42a;
        }
        break;
      case 0x27:
        if ((*(byte *)((int)in_ECX + 0x3d) & 1) != 0) {
          uVar2 = FUN_001fdf20(0x20,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          local_28 = &PTR_LAB_003a4f50;
          goto LAB_001ff42a;
        }
        break;
      case 0x28:
        if ((*(byte *)((int)in_ECX + 0x3d) & 1) != 0) {
          uVar2 = FUN_001fdf20(0x21,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          local_b4 = &PTR_LAB_003a4f50;
          goto LAB_001ff42a;
        }
        break;
      case 0x29:
        if ((*(byte *)((int)in_ECX + 0x3d) & 1) != 0) {
          uVar2 = FUN_001fdf20(0x22,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          local_8c = &PTR_LAB_003a4f50;
          goto LAB_001ff42a;
        }
        break;
      case 0x2a:
        if ((*(byte *)((int)in_ECX + 0x3d) & 1) != 0) {
          uVar2 = FUN_001fdf20(0x23,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          local_64 = &PTR_LAB_003a4f50;
          goto LAB_001ff42a;
        }
        break;
      case 0x2b:
        if ((*(byte *)((int)in_ECX + 0x3d) & 1) != 0) {
          uVar2 = FUN_001fdf20(0x24,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          local_3c = &PTR_LAB_003a4f50;
          goto LAB_001ff42a;
        }
        break;
      case 0x2c:
        if ((*(byte *)((int)in_ECX + 0x3d) & 1) != 0) {
          uVar2 = FUN_001fdf20(0x25,(int)(char)in_ECX[0xf]);
          FUN_001ff0a0(uVar2);
          local_14 = &PTR_LAB_003a4f50;
          goto LAB_001ff42a;
        }
      }
      cVar1 = FUN_001feb60();
    }
  }
  return;
}
