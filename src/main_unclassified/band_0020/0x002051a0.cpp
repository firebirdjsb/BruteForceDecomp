/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3A76B5FAA2432FB58473861ACBBAC22CB117BA34F5F83EA489CC359DAAC40EC
 * Entry: 0x002051a0, Ghidra index: 7287, label: FUN_002051a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE 0x00205226: direct CALL 0x0003D730; two guest stack
 * DWORDs, callee RET 8, and EAX returns the first guest pointer.
 * Source-matched declaration only: guest memory/ABI_UNVERIFIED. */
extern undefined4 *FUN_0003d730(undefined4 *param_1, undefined4 *param_2);
/* 0x001FEDB0 byte-buffer callee draft matches this source pointer;
 * host pointer address is preserved, while Xbox guest ABI is UNVERIFIED. */
extern char FUN_001fedb0(undefined4 flag, int *key, byte *data);
char FUN_002051a0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  cVar1 = FUN_001fedb0(param_1,param_2,reinterpret_cast<byte *>(param_3));
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(in_ECX + 0x98);
    cVar3 = (char)param_1;
    if (*param_2 == -0x19a86067) {
      if (cVar3 == '\0') {
        uVar2 = *(undefined1 *)param_3;
      }
      else {
        *(undefined1 *)param_3 = uVar2;
      }
      cVar1 = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x98) = uVar2;
    uVar2 = *(undefined1 *)(in_ECX + 0x99);
    if ((cVar1 == '\0') && (*param_2 == -0x1f2ca7f5)) {
      if (cVar3 == '\0') {
        uVar2 = *(undefined1 *)param_3;
      }
      else {
        *(undefined1 *)param_3 = uVar2;
      }
      cVar1 = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x99) = uVar2;
    if (cVar1 == '\0') {
      if (*param_2 == 0xafc91c1) {
        puVar4 = (undefined4 *)(in_ECX + 100);
        puVar5 = param_3;
        if (cVar3 != '\0') {
          puVar4 = param_3;
          puVar5 = (undefined4 *)(in_ECX + 100);
        }
        FUN_0003d730(puVar4,puVar5);
        cVar1 = '\x01';
      }
      if (cVar1 == '\0') {
        if (*param_2 == 0x1048fbd6) {
          if (cVar3 == '\0') {
            *(undefined4 *)(in_ECX + 0x40) = *param_3;
          }
          else {
            *param_3 = *(undefined4 *)(in_ECX + 0x40);
          }
          cVar1 = '\x01';
        }
        if (cVar1 == '\0') {
          if (*param_2 == 0xf8084c9) {
            if (cVar3 == '\0') {
              *(undefined4 *)(in_ECX + 0x60) = *param_3;
            }
            else {
              *param_3 = *(undefined4 *)(in_ECX + 0x60);
            }
            cVar1 = '\x01';
          }
          if (cVar1 == '\0') {
            if (*param_2 == 0x110b6663) {
              if (cVar3 == '\0') {
                *(undefined4 *)(in_ECX + 0x44) = *param_3;
              }
              else {
                *param_3 = *(undefined4 *)(in_ECX + 0x44);
              }
              cVar1 = '\x01';
            }
            if (cVar1 == '\0') {
              if (*param_2 == -0xb2d44c7) {
                if (cVar3 == '\0') {
                  *(undefined4 *)(in_ECX + 0x50) = *param_3;
                }
                else {
                  *param_3 = *(undefined4 *)(in_ECX + 0x50);
                }
                cVar1 = '\x01';
              }
              if (cVar1 == '\0') {
                if (*param_2 == 0x199862f8) {
                  if (cVar3 == '\0') {
                    *(undefined4 *)(in_ECX + 0x48) = *param_3;
                  }
                  else {
                    *param_3 = *(undefined4 *)(in_ECX + 0x48);
                  }
                  cVar1 = '\x01';
                }
                if (cVar1 == '\0') {
                  if (*param_2 == -0x1fe5adc4) {
                    if (cVar3 == '\0') {
                      *(undefined4 *)(in_ECX + 0x5c) = *param_3;
                    }
                    else {
                      *param_3 = *(undefined4 *)(in_ECX + 0x5c);
                    }
                    cVar1 = '\x01';
                  }
                  if (cVar1 == '\0') {
                    if (*param_2 == -0x787e587) {
                      if (cVar3 == '\0') {
                        *(undefined4 *)(in_ECX + 0x4c) = *param_3;
                      }
                      else {
                        *param_3 = *(undefined4 *)(in_ECX + 0x4c);
                      }
                      cVar1 = '\x01';
                    }
                    if ((cVar1 == '\0') && (*param_2 == 0x10db0f04)) {
                      if (cVar3 != '\0') {
                        *param_3 = *(undefined4 *)(in_ECX + 0x94);
                        return '\x01';
                      }
                      *(undefined4 *)(in_ECX + 0x94) = *param_3;
                      cVar1 = '\x01';
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return cVar1;
}
