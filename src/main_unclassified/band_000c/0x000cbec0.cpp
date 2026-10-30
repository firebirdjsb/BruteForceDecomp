/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20C1BC5A71710F0100C877DC85C7FD44F860C630247BE6DE2963816C5D2A39F8
 * Entry: 0x000cbec0, Ghidra index: 2521, label: FUN_000cbec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cbec0(void)

{
  float fVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_EDX;
  undefined1 uVar6;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined1 uStack_2;
  
  if (in_EDX != in_EAX[0x11]) {
    /* The original does not load guest VA 0x74 on entry. */
    if (in_EDX != 0) {
      if (in_EAX[0x23] == 1) {
        fVar1 = (float)in_EAX[0x1a];
        iVar2 = in_EAX[0x1b];
      }
      else if (in_EAX[0x23] == 2) {
        fVar1 = (float)in_EAX[0x1c];
        iVar2 = in_EAX[0x1d];
      }
      else {
        fVar1 = (float)in_EAX[0x18];
        iVar2 = in_EAX[0x19];
      }
      if ((in_EAX[0x11] == 0) && (in_EDX == 2)) {
        if (in_EAX[10] != 0) {
          *(int *)(in_EAX[10] + 0x48) = iVar2;
        }
        else {
          /* Original XOR EAX,EAX; MOV [EAX+0x74],ECX: low guest
           * address 0x74, not a host-global or a C stack variable.
           * Native port must route this through guest-memory translation. */
          *(int *)(uintptr_t)UINT32_C(0x74) = iVar2;
        }
      }
      else {
        if (in_EAX[10] == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = in_EAX[10] + -0x2c;
        }
        *(float *)(iVar2 + 0x70) = fVar1;
        *(float *)(iVar2 + 0x74) = fVar1 + 1.0;
      }
    }
    in_EAX[0x11] = in_EDX;
    iVar2 = (**(code **)(*in_EAX + 0x2c))();
    if (iVar2 == 0) {
      *(byte *)(in_EAX[0xe] + 0x13) = *(byte *)(in_EAX[0xe] + 0x13) | 1;
      piVar3 = (int *)(**(code **)(*in_EAX + 0x34))();
      (**(code **)(*piVar3 + 100))();
      FUN_000ba6d0();
    }
    else {
      (**(code **)(*in_EAX + 0x2c))();
      FUN_000bb9d0(in_EAX[0xe]);
      iVar2 = (**(code **)(*in_EAX + 0x2c))();
      (**(code **)(**(int **)(iVar2 + 0xc) + 0x18))();
      FUN_000ba6d0();
      if (in_EAX[8] == 0) {
        piVar3 = (int *)(**(code **)(*in_EAX + 0x34))();
        (**(code **)(*piVar3 + 100))();
        FUN_000ba6d0();
      }
      *(byte *)(in_EAX[0xe] + 0x13) = *(byte *)(in_EAX[0xe] + 0x13) & 0xfe;
    }
    puVar4 = (undefined4 *)FUN_000b87a0();
    uVar5 = *puVar4;
    if ((in_EAX[0x11] == 1) || (in_EAX[0x11] != 2)) {
      uVar7 = 0xff820fda;
    }
    else {
      puVar4 = (undefined4 *)FUN_000b87e0();
      uVar5 = *puVar4;
      uVar7 = 0xe1e97460;
    }
    FUN_000bb220(uVar7);
    iVar2 = *(int *)(in_EAX[0xe] + 0x2c);
    uStack_2 = (undefined1)((uint)uVar5 >> 0x10);
    *(char *)(iVar2 + 0x38) = (char)uVar5;
    uVar6 = (undefined1)((uint)uVar5 >> 8);
    *(undefined1 *)(iVar2 + 0x3a) = uVar6;
    *(undefined1 *)(iVar2 + 0x39) = uStack_2;
    iVar2 = *(int *)(in_EAX[0xf] + 0x2c);
    *(char *)(iVar2 + 0x38) = (char)uVar5;
    *(undefined1 *)(iVar2 + 0x3a) = uVar6;
    *(undefined1 *)(iVar2 + 0x39) = uStack_2;
  }
  return;
}
