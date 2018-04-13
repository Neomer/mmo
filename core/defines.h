#ifndef DEFINES_H
#define DEFINES_H

#include <memory>

#define PROP(type, name)        private: type _##name; \
                                public: type get##name() const { return _##name; } \
                                void set##name(type value) { _##name = value; }

#define PROP_PTR(type, name)        private: type *_##name; \
                                    public: type *get##name() const { return _##name; } \
                                    void set##name(type *value) { _##name = value; }


#endif // DEFINES_H
