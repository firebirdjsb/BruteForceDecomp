/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89AF3D94F8274C8B7AD9C5D482289C7A2AAC1F334C8C746100E40C4FB81404DC
 * Entry: 0x003474f9, Ghidra index: 12851, label: socket
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xonline_context_bytes_x86.h"
int __thiscall XONLINES__socket(XONLINES *this,int __domain,int __type,int __protocol)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((this == (XONLINES *)0x0) || (*(short *)(this + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
    return -1;
  }
  if ((__domain == 0) || (__domain == 2)) {
    if ((__type == 0) || ((__type == 1 || (__type == 2)))) {
      if ((__protocol == 0) || (((__protocol == 6 || (__protocol == 0x11)) || (__protocol == 0xfe)))
         ) {
        if (((__type == 0) && (__type = 2, __protocol != 0x11)) && (__protocol != 0xfe)) {
          __type = 1;
        }
        if (__protocol == 0) {
          __protocol = ((__type != 2) - 1 & 0xb) + 6;
        }
        if ((__type == 1) == (__protocol == 6)) {
          KeRaiseIrqlToDpcLevel();
          piVar3 = (int *)FUN_003471d2(__type == 1,0);
          if (piVar3 != (int *)0x0) {
            FUN_00345541(0xffffffff,0x400000);
            if (__protocol == 0xfe) {
              FUN_00345541(0xffffffff,4);
            }
            piVar1 = *(int **)(this + 0xbdc);
            piVar3[1] = (int)piVar1;
            *piVar3 = (int)(this + 0xbd8);
            *piVar1 = (int)piVar3;
            *(int **)(this + 0xbdc) = piVar3;
            KfLowerIrql();
            return (int)piVar3;
          }
          KfLowerIrql();
          uVar2 = 0x2747;
          goto LAB_00347619;
        }
      }
      uVar2 = 0x273b;
    }
    else {
      uVar2 = 0x273c;
    }
  }
  else {
    uVar2 = 0x273f;
  }
LAB_00347619:
  XAPILIB__SetLastError(uVar2);
  return -1;
}
