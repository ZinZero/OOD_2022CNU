//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_PART_H_
#define CNU_CSE_OOD_OOD10_PART_H_
#include <string>

class Part {
 public:
  explicit Part(std::string factory_name);
  virtual std::string GetInfo() const = 0;
 protected:
  const std::string& factory_name() const;
 private:
  const std::string factory_name_;
};
#endif  //  CNU_CSE_OOD_OOD10_PART_H_
